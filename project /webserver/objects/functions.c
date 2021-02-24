#include "functions.h"

int socket(int domain, int type, int protocol) 
{
}
int shutdown(int sockfd, int how) 
{
}


int httpRequest(request)
{
    int statuscode=0;

    if (request=="HEAD") //FÅR EJ MED HTML BODY
    {
        
    }
    else if (request=="GET") //FÅR MED HTML BODY
    {

    }
    else
    {
        statuscode = 501;
    }

    return code;
}


/*
GET
The GET method requests a representation of the specified resource. Requests using GET should only retrieve data.
HEAD

The HEAD method asks for a response identical to that of a GET request, but without the response body.
*/
#endif