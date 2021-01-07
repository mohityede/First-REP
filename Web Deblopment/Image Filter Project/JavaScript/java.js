var img;
    var imgcan;
    var imgcant;
    function upload(){
      imgcan=document.getElementById("can");
      var filein=document.getElementById("finp");
      img = new SimpleImage(filein);
      img.drawTo(imgcan);
    }
    
    function doGray(){
      for(var px of img.values()){
        var avg=(px.getGreen()+px.getRed()+px.getBlue())/3;
        px.setGreen(avg);
        px.setRed(avg);
        px.setBlue(avg);
      }
      var imgcan=document.getElementById("can");
      img.drawTo(imgcan);
      var filein=document.getElementById("finp");
      img = new SimpleImage(filein);
    }
    function doRed(){
      for (var px of img.values()){
        px.setRed(250);  
      } 
      var imgcan=document.getElementById("can");
      img.drawTo(imgcan);
      var filein=document.getElementById("finp");
      img = new SimpleImage(filein);
    }
    function doGreen(){
      for (var px of img.values()){
        px.setGreen(200);  
      } 
      var imgcan=document.getElementById("can");
      img.drawTo(imgcan);
      var filein=document.getElementById("finp");
      img = new SimpleImage(filein);
    }
    function doBlue(){
      for (var px of img.values()){
        px.setBlue(250);  
      } 
      var imgcan=document.getElementById("can");
      img.drawTo(imgcan);
      var filein=document.getElementById("finp");
      img = new SimpleImage(filein);
    }
    
    function doRain(){
      for (var p of img.values()){
        var avg=(p.getGreen()+p.getRed()+p.getBlue())/3; //average of RGB for pixel
        var imgh=img.getHeight(); //Image Height
        var py=p.getY(); //Pixel Y co-ordinate
        // for Red strip
        if (py<=imgh/7){
          if(avg<128){
            p.setRed(2*avg);
            p.setBlue(0);
            p.setGreen(0);
          }
          else{
            p.setRed(255);
            p.setBlue(2*avg-255);
            p.setGreen(2*avg-255);
          }
        }
        // for Orange strip
        else if(py>imgh/7 && py<=imgh*2/7){
          if(avg<128){
            p.setRed(2*avg);
            p.setBlue(0);
            p.setGreen(0.8*avg);
          }
          else{
            p.setRed(255);
            p.setBlue(2*avg-255);
            p.setGreen(1.2*avg-51);
          }
        }
        // for Yellow strip
        else if(py>imgh*2/7 && py<=imgh*3/7){
          if(avg<128){
            p.setRed(2*avg);
            p.setBlue(0);
            p.setGreen(2*avg);
          }
          else{
            p.setRed(255);
            p.setBlue(2*avg-255);
            p.setGreen(255);
          }
        }
        // for Green strip
        else if(py>imgh*3/7 && py<=imgh*4/7){
          if(avg<128){
            p.setRed(0);
            p.setBlue(0);
            p.setGreen(2*avg);
          }
          else{
            p.setRed(2*avg-255);
            p.setBlue(2*avg-255);
            p.setGreen(255);
          }
        }
        // for Blue strip
        else if(py>imgh*4/7 && py<=imgh*5/7){
          if(avg<128){
            p.setRed(0);
            p.setBlue(2*avg);
            p.setGreen(0);
          }
          else{
            p.setRed(2*avg-255);
            p.setBlue(255);
            p.setGreen(2*avg-255);
          }
        }
        // for Indigo strip
        else if(py>imgh*5/7 && py<=imgh*6/7){
          if(avg<128){
            p.setRed(0.8*avg);
            p.setBlue(2*avg);
            p.setGreen(0);
          }
          else{
            p.setRed(1.2*avg-51);
            p.setBlue(255);
            p.setGreen(2*avg-255);
          }
        }
        // for Voilet strip
        else{
          if(avg<128){
            p.setRed(1.6*avg);
            p.setBlue(1.6*avg);
            p.setGreen(0);
          }
          else{
            p.setRed(0.4*avg+153);
            p.setBlue(0.4*avg+153);
            p.setGreen(2*avg-255);
          }
        }
        }
      imgcan=document.getElementById("can");
      img.drawTo(imgcan);
      var filein=document.getElementById("finp");
      img = new SimpleImage(filein);
    }
    function reset(){
      var filein=document.getElementById("finp");
      img = new SimpleImage(filein);
      img.drawTo(imgcan);
    }
    function isinull(){
      if(can==null){
        alert('please upload the image.')
      }
    }
