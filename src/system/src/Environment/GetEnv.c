#include "Env.h"

/******************************************************************/


char *GetEnv(char *envvar)
{
  char *buffer, *result;
  
  buffer=getenv(envvar);
  
  if (buffer==NULL)
  {
	 result=(char*)SAC_MALLOC(1);
	 result[0]=0;
  }
  else
  {
	 result=(char*)SAC_MALLOC(strlen(buffer)+1);
	 strcpy(result, buffer);
  }
  
  return(result);
}


/******************************************************************/


