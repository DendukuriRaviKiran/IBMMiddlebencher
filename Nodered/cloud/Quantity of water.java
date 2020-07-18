var x=msg.payload;
var y=(x.substring(7));
msg.payload=parseInt(y);

return msg;