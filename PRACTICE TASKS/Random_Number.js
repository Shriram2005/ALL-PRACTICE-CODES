while(true){


  
let c =prompt ("\nHow many chance you want ? ");

let a =  Math.floor(Math.random()*10);

  for(let i=1;i<=c;i++){
  let n = prompt ("enter the number:");

n = Number.parseInt(n);

if(n == a){
  console.log("Congratulations...It is correct");
  break; 
   }
else if(n < a){
  console.log("number is smaller");
}

else if(n > a){
 console.log(`number is greater`);

}

    if(i==c){
    console.log(`\nBoom... Chance is end...`);

  }
  }
 
console.log("the correct number is : ",a);


console.log("\n\nTere ko firse khelna hey ka be ?");
let choice =prompt ("(Press any key to continue and 0 to end)\n");

if(choice==0){
  console.log("Thank You..");
  break;
}
  
}