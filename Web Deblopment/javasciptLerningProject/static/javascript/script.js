function ageInMon(){
    var ageInYear= prompt("Enter Your birth Year.");
    var ageInMonth= (2020-ageInYear)*12;
    var h3= document.createElement('h2');
    var ans=document.createTextNode('You are '+ageInMonth+' month old.');
    h3.setAttribute('id','ageInMon');
    h3.appendChild(ans);
    document.getElementById('res-1').appendChild(h3);
}

function reset(){
    document.getElementById('res-1').remove();
    // var h= document.createElement('h2');
    // var an=document.createTextNode('You old.');
    // h.setAttribute('id','reset');
    // h.appendChild(an);
    // document.getElementById('res-1').appendChild(h);
}