var obtdata = global.get("globalval");
if(msg.payload =="Sender2")
{
 return parseInt(obtdata);
}
else
{
 msg.payload=0;    
 return msg;   
}