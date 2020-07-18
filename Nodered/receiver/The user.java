var obtdata = global.get("userdata");
if(msg.payload =="confirmation")
{
 return obtdata;
}
else
{
 msg.payload=0;    
 return msg;   
}