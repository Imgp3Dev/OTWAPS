#include <iostream>
#include <libssh/libssh.h>
#include <stdlib.h>
int main() {
ssh_session my_ssh_section;
int verbosity = SSH_LOG_PROTOCOL;
int port = 2220;
my_ssh_session = sshnew();
if (my_ssh_session == NULL)
exit(-1);
ssh_options_set(my_ssh_session, 
SSH_OPTIONS_HOST,"bandit.labs.overthewire.org", 
&host);
ssh_options_set(my_ssh_session,SSH_OPTIONS_LOG_VERBOSITY, 
&verbosity);
ssh_options_set(my_ssh_session,SSH_OPTIONS_PORT, 
&port);

string username = "bandit0";
string password = "bandit0";

int ssh_userauth_password(ssh_session, 
session, const  char *  username, const 
char * password);

ssh_free(my_ssh_session);
ssh_connect(my_ssh_session);

cout << "You are connected to: " << &host 
<< ", " << &port;

system("cat readme");
/*Password inside file is 
boJ9jbbUNNfktd78OOpsqOltutMc3MY1*/
string username = "bandit1";
string password = "boJ9jbbUNNfktd78OOpsqOltutMc3MY1"
ssh_options_set(my_ssh_session,
SSH_OPTIONS_HOST,"bandit1.labs.overthewire.org",
&host);
ssh_options_set(my_ssh_session,SSH_OPTIONS_LOG_VER$
&verbosity);
ssh_options_set(my_ssh_session,SSH_OPTIONS_PORT,
&port);
int ssh_userauth_password(ssh_session,
session, const  char *  username, const
char * password);

ssh_free(my_ssh_session);
ssh_connect(my_ssh_session);


cout << "You are connected to: " << &host
<< ", " << &port;
system("ls");
system("cat ./-");
/*Note: on overthewire they gave a hint to 
solving this*/
/*password is 
CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9*/

string username = "bandit2";
string password = "CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9";

ssh_options_set(my_ssh_session,
SSH_OPTIONS_HOST,"bandit2.labs.overthewire.org",
&host);
ssh_options_set(my_ssh_session,SSH_OPTIONS_LOG_VER$
&verbosity);
ssh_options_set(my_ssh_session,SSH_OPTIONS_PORT,
&port);

int ssh_userauth_password(ssh_session,
session, const  char *  username, const
char * password);

ssh_free(my_ssh_session);
ssh_connect(my_ssh_session);

system("cat " + "spaces in this filename");


string username = "bandit3";
string password = "UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK";

ssh_options_set(my_ssh_session,
SSH_OPTIONS_HOST,"bandit3.labs.overthewire.org",
&host);
ssh_options_set(my_ssh_session,SSH_OPTIONS_LOG_VER$
&verbosity);
ssh_options_set(my_ssh_session,SSH_OPTIONS_PORT,
&port);

int ssh_userauth_password(ssh_session,
session, const  char *  username, const
char * password);

ssh_free(my_ssh_session);
ssh_connect(my_ssh_session);

system("find");
system("cat ./.hidden")
}
