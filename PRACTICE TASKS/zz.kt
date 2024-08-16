@Composable
 fun HomeEntry(modifier: Modifier = Modifier) {
     val navController = rememberNavController()
     val context = LocalContext.current
     val onBackPressed: () -> Unit = {
         with(navController) {
             if (currentBackStackEntry?.lifecycle?.currentState == Lifecycle.State.RESUMED) {
                 popBackStack()
             }
         }
     }
     Box(
         modifier = Modifier
             .fillMaxSize()
             .background(MaterialTheme.colorScheme.background),
         contentAlignment = Alignment.BottomCenter
     ) {
 
         NavHost(
             modifier = Modifier.align(Alignment.Center),
             navController = navController,
             startDestination = Route.CALENDAR
         ) {
             slideInVerticallyComposable(route = Route.CALENDAR) {
                 CalendarScreen {
                     navController.navigate(it) {
                         popUpTo(navController.graph.startDestinationId) { inclusive = true }
                         launchSingleTop = true
                     }
                 }
             }
             animatedComposableVariant(route = Route.HOROSCOPE) {
                 HoroscopeScreen(onClick = { navController.navigate("${Route.HOROSCOPE_DETAILS}/$it") }) {
                     AdsManager.showInterstitialAd(context)
                     navController.navigate(Route.CALENDAR)
                 }
             }
             animatedComposable(
                 "${Route.HOROSCOPE_DETAILS}/{id}",
                 arguments = listOf(navArgument("id") {
                     type = NavType.IntType
                 })
             ) {
                 val id = it.arguments!!.getInt("id")
                 HoroscopeDetailsScreen(id = id, viewModel = hiltViewModel<HoroscopeViewModel>()) {
                     onBackPressed()
                 }
             }
         }
 
         BottomNav() {
             navController.navigate(bottomNavigationItems[it].route) {
                 popUpTo(navController.graph.findStartDestination().id) {
                     saveState = true
                 }
                 launchSingleTop = true
                 restoreState = true
             }
         }
     }
 }



