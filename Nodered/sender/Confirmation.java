if(msg.payload =="confirmation")
{
 return msg;
}
else
{
 msg.payload=0;    
 return msg;   
}