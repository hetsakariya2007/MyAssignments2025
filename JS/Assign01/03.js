var n=2100000;

if(n>1000000){
    console.log("30% Tax");
}
else if(n>500000){
    console.log("20% Tax");
}
else if(n>250000){
    console.log("5% Tax");
}
else if(n>0){
    console.log("No tax");
}
else{
    console.log("Please enter positive numbers only.");
}