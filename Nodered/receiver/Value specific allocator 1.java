var obtdata = global.get("globalval");
if(msg.payload =="Sender1")
{
 return parseInt(obtdata);
}
else
{
 msg.payload=0;    
 return msg;   
}