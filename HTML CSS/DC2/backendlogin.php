<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>SANDIP LIFE</title>
    <link rel="stylesheet" href="first.css">
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Poppins:wght@100;400;500;600;700&display=swap"
        rel="stylesheet">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.2.1/css/all.min.css" />
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.2.1/css/all.min.css" />
</head>

<body>

    <div class="container">
        <div class="nav navbar">
            <div class="logo">
                <img src="logono.png" width="160px">
            </div>
            <nav>
                <ul id="MenuItems">
                    <li><a href="first.html">Home</a></li>
                    <li><a href="1stprodcut.html">Products</a></li>
                    <li><a href="#">About</a></li>
                    <li><a href="cntact.html">Contact</a></li>
                    <li><a href="account.html">Account</a></li>
                   
                    
                </ul>
            </nav>
            <img src="cart.png" width="30px" height="30px">
            <img src="menu.png" class="menu-icon" onclick="menutoggle()"></i>
        </div>
    </div>
    <!--account-page-->
    <div class="account-page">
        <div class="container">
            <div class="row">
                <div class="col-2">
                    <img src="logo.png" width="100%">
                </div>

                <div class="col-2">
                    <div class="form-container">
                        <div class="form-btn">
                            <span onclick="login()">Login</span>
                            <span onclick="register()">Register</span>
                            <hr id="Indicator">
                        </div>

                       
                        <form id="LoginForm">
                            <input type="number" placeholder="PRN-Number" name="PRN-Number">
                            <input type="password" placeholder="Password" name="Password">
                            <button type="submit" class="btn" name="login_Btn">Login</button>
                            <a href="#">Forgot Password</a>
                        </form>

                        <form id="RegForm" method="post" action="backendlogin.php">
                            <input type="number" placeholder="PRN-Number" name="PRN-Number">
                            <input type="email" placeholder="email" name="email" >
                            <input type="password" placeholder="Password" name="Password" >
                            <button type="submit" class="btn" name="login_Btn"> Register</button>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </div>


    <!--footer-->
    <div class="footer">
        <div class="container">
            <div class="row">
                <div class="footer-col-1">
                    <h3>Download Our App</h3>
                    <p>Download App for Android and ios mobile phone</p>
                    <div class="app-logo">
                        <img src="play-store.png" alt="">
                        <img src="app-store.png" alt="">
                    </div>
                </div>
                <div class="footer-col-1">
                    <img src="logono.png" alt="" height="100" width="220">
                    <p>Lorem, ipsum dolor sit amet consectetur adipisicing elit. Obcaecati quidem laboriosam dignissimos
                        ullam minus iure?</p>
                </div>
                <div class="footer-col-3">
                    <h3>Useful Links</h3>
                    <ul>
                        <li><a href="#" class="link">Coupons</a></li>
                        <li><a href="#" class="link">Blog Posts</a></li>
                        <li><a href="#" class="link">Return Policy</a></li>
                        <li><a href="#" class="link">Join Affiliates</a></li>
                    </ul>
                </div>
                <div class="footer-col-3">
                    <h3>Folow Us</h3>
                    <ul>
                        <li>Facebook</li>
                        <li>Instagram</li>
                        <li>Twitter</li>
                        <li>Youtube</li>
                    </ul>
                </div>
            </div>
            <hr>
            <p class="">Copyright 2022 - Onimasu</p>
        </div>
    </div>

    <!--SCripto-->
    <script>
        var MenuItems = document.getElementById("MenuItems");

        MenuItems.style.maxHeight = "0px";
        function menutoggle() {
            if (MenuItems.style.maxHeight == "0px") {
                MenuItems.style.maxHeight = "200px"
            }
            else {
                MenuItems.style.maxHeight = "0px"
            }
        }
    </script>
    <!---js for product gallery---->
    <script>

        var ProductImg = document.getElementById("ProductImg");
        var SmallImg = document.getElementsByClassName("small-img");

        SmallImg[0].onclick = function () {
            ProductImg.src = SmallImg[0].src;
        }
        SmallImg[1].onclick = function () {
            ProductImg.src = SmallImg[1].src;
        }
        SmallImg[2].onclick = function () {
            ProductImg.src = SmallImg[2].src;
        }
        SmallImg[3].onclick = function () {
            ProductImg.src = SmallImg[3].src;
        }

    </script>
    <!---Js for Toggle Form--->
    <script>

        var LoginForm = document.getElementById("LoginForm")
        var RegForm = document.getElementById("RegForm")
        var Indicator = documetn.getElementById("Indicator")

function register(){
 RegForm.style.transform = "translateX(0px)";
 LoginForm.style.transform = "translateX(0px)";
 Indicator.style.transform = "translateX(100px)";
}

function login(){
 RegForm.style.transform = "translateX(300px)";
 LoginForm.style.transform = "translateX(300px)";
 Indicator.style.transform = "translateX(300px)";
}





    </script>

</body>

</html>

<?php
$conn = mysqli_connect("localhost","root","");
if(isset($_POST['login_Btn'])){
    $PRN_Number=$_POST['PRN_Number'];
    $sql= "SELECT * from websitelogin.logindetails WHERE username = '$PRN_Number'";
    $result = mysqli_query($conn,$sql);
    while($row = mysqli_fetch_assoc($result)){
        $resultPassword = $row['passwordp'];
        if($password == $resultPassword){
            header('Location:first.html');
        }else{
            echo "<script>
            alert('Login Successful');
            </script>";
            
        }
    }
}

?>