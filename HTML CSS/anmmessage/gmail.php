<?php
echo "
<html>
<head>
<link rel=\"stylesheet\" href=\"https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css\">
<meta name=\"viewport\" content=\"width=device-width\">
<link href=\"https://fonts.googleapis.com/css?family=Acme&display=swap\" rel=\"stylesheet\">
<title>/safe website</title>
<style>
*{
  background-color: rgb(0, 0, 0);
  color: #00fe0d;
  border-color: #00fe0d;
}
body{
    text-align:center;
    font-family: 'Acme', sans-serif;
}
.text{

    padding:5px;
   text-align:center;

}
.btn{
    padding:5px;
    background:#36D6DE;
    border-radius:10px;
    font-size:15px;
    cursor:pointer;
}
.loader {
  border: 16px solid #ffffff;
  font-size: 120%;
  border-radius: 50%;
  border-top: 16px solid black;
  border-bottom: 16px solid green;
  width: 120px;
  height: 120px;
  -webkit-animation: spin 2s linear infinite;
  animation: spin 3s linear infinite;
}

@-webkit-keyframes spin {
  0% { -webkit-transform: rotate(0deg); }
  100% { -webkit-transform: rotate(360deg); }
}

@keyframes spin {
  0% { transform: rotate(0deg); }
  100% { transform: rotate(360deg); }
}
</style>
<h1>GMAIL SENDER</h1>
<b>Script By : MR. anonymous</b><br><br>

</center><hr>
";
$to = $_GET['to'];
$from = $_GET['from'];
$mail_subject = $_GET['subject'];
$mail_content = $_GET['message'];
$header ="From: $from"."\r\n";
$result = mail($to,$mail_subject,$mail_content,$header);
if ($result) {
echo "<center>Mail Sent.</center>";
}
else {
echo "<center>Mail Not Sent.</center>";
}
echo " <div class=\"footer\">
  <h4>Created By : anonymous</h4>
</div>
";