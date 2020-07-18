var x=msg.payload;
var y=x.substring(0,7);
msg.payload=y;
return msg;