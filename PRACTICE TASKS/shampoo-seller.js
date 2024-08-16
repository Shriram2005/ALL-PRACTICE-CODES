let choice;
let oil = 100, parleg = 50, aloo = 250;
let price, amount, gstprice, discountprise;

console.log("Welcome to Chotu dukan...\nYaha par bas oil, parleG aur aloo milega.\n1000rs se jyada ki shopping par Flat 10% Discount paaye\nFIXED RATE ONLY!\n")
//select item
console.log("Select item to buy : ");
let select = prompt("oil (100rs),  parleg (50rs),  aloo (250rs)\nYour answer : ");

if (select == "oil") {
    price = oil;
}
else if (select == "parleg") {
    price = parleg;
}
else if (select == "aloo") {
    price = aloo;
}
// enter amount of items
amount = prompt("Enter amount to buy ", select);
price = amount * price;

//print amount after gst and discount 
console.log("Original price = ", price);
gstprice = price + price * (18 / 100);
console.log("Price after GST = ", gstprice);

if (gstprice >= 1000) {
    discountprice = gstprice - (gstprice * (10 / 100));
    console.log("You got 10% discount");
    console.log("Your final amount is : ", discountprice);
}
else {
    console.log("Sorry you didn't got any discount...");
    console.log("Your final amount is : ", gstprice);
}

