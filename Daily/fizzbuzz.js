/**
 * fizzbuzz
 * 
 */
let x = 1;

while (x <= 100) {
    if( x % 3 === 0 ){

        console.log("Fizz");
        
    }else if(x % 5 === 0){
      
           console.log("Buzz");

    }else if( x % 3 === 0 && x % 5 === 0){
      
        console.log("FizzBuzz");

    }else{
        console.log(x);
    }
    x = x + 1;
}