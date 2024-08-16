
  // Import the functions you need from the SDKs you need
  import { initializeApp } from "https://www.gstatic.com/firebasejs/9.17.1/firebase-app.js";
  import { getAnalytics } from "https://www.gstatic.com/firebasejs/9.17.1/firebase-analytics.js";
  // TODO: Add SDKs for Firebase products that you want to use
  // https://firebase.google.com/docs/web/setup#available-libraries

  // Your web app's Firebase configuration
  // For Firebase JS SDK v7.20.0 and later, measurementId is optional
  const firebaseConfig = {
    apiKey: "AIzaSyDuxiOlN3l3gexyDp-3d_17kR_1-q2MYP8",
    authDomain: "newwebproject-6e67e.firebaseapp.com",
    projectId: "newwebproject-6e67e",
    storageBucket: "newwebproject-6e67e.appspot.com",
    messagingSenderId: "694895328574",
    appId: "1:694895328574:web:37ec3b16100296dd14406f",
    measurementId: "G-49F43J6EWW"
  };

  // Initialize Firebase
  const app = initializeApp(firebaseConfig);
  const analytics = getAnalytics(app);





  document.getElementById("LoginForm").addEventListener("submit",(event)=>{
      event.preventDefault()

  })