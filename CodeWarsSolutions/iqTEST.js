function iqTest(numbers){

  var num = numbers.split(" ");
  var Ecount = 0, Ocount=0;
  var pos;
  for(let i=0; i<num.length; i++){
    if((num[i]%2)==0){
      Ecount++; 
    }
    else Ocount++;  
  }
  
  if(Ecount>Ocount){
    for(let i=0; i<num.length; i++){
      if((num[i]%2)==1){
      pos = i + 1; 
        }
    }
  }
  else{
    for(let i=0; i<num.length; i++){
      if((num[i]%2)==0){
      pos = i + 1;
      }
    }
  }
  return pos;
}