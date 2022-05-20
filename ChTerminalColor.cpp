// this code uses ansi escape codes to changes the color of terminal
// might be a little dirty

#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char** argv) {
	if (argc==3) {
		if (!strcmp(argv[1],"-o")){
			if (!strcmp(argv[2],"reset")) {
			cout << "\033[1;0m";
			} else if (!strcmp(argv[2],"bold")) {
			cout << "\033[1;1m";
			} else if (!strcmp(argv[2],"underline")) {
			cout << "\033[1;4m";
			} else if (!strcmp(argv[2],"flash")) {
			cout << "\033[1;5m";
			} else if (!strcmp(argv[2],"inverse")) {
			cout << "\033[1;7m";
			} else if (!strcmp(argv[2],"boldoff")) {
			cout << "\033[1;21m";
			} else if (!strcmp(argv[2],"underlineoff")) {
			cout << "\033[1;24m";
			} else if (!strcmp(argv[2],"inverseoff")) {
			cout << "\033[1;27m";
			}
		} else if (!strcmp(argv[1],"-f")){
			if (!strcmp(argv[2],"black")) {
			cout << "\033[1;30m";
			} else if (!strcmp(argv[2],"red")) {
			cout << "\033[1;31m";
			} else if (!strcmp(argv[2],"green")) {
			cout << "\033[1;32m";
			} else if (!strcmp(argv[2],"yellow")) {
			cout << "\033[1;33m";
			} else if (!strcmp(argv[2],"blue")) {
			cout << "\033[1;34m";
			} else if (!strcmp(argv[2],"magenta")) {
			cout << "\033[1;35m";
			} else if (!strcmp(argv[2],"cyan")) {
			cout << "\033[1;36m";
			} else if (!strcmp(argv[2],"white")) {
			cout << "\033[1;37m";
			}
		} else if (!strcmp(argv[1],"-b")){
			if (!strcmp(argv[2],"black")) {
			cout << "\033[1;40m";
			} else if (!strcmp(argv[2],"red")) {
			cout << "\033[1;41m";
			} else if (!strcmp(argv[2],"green")) {
			cout << "\033[1;42m";
			} else if (!strcmp(argv[2],"orange")) {
			cout << "\033[1;43m";
			} else if (!strcmp(argv[2],"blue")) {
			cout << "\033[1;44m";
			} else if (!strcmp(argv[2],"magenta")) {
			cout << "\033[1;45m";
			} else if (!strcmp(argv[2],"cyan")) {
			cout << "\033[1;46m";
			} else if (!strcmp(argv[2],"white")) {
			cout << "\033[1;47m";
			} else if (!strcmp(argv[2],"dgray")) {
			cout << "\033[1;100m";
			} else if (!strcmp(argv[2],"lred")) {
			cout << "\033[1;101m";
			} else if (!strcmp(argv[2],"lgreen")) {
			cout << "\033[1;102m";
			} else if (!strcmp(argv[2],"yellow")) {
			cout << "\033[1;103m";
			} else if (!strcmp(argv[2],"lblue")) {
			cout << "\033[1;104m";
			} else if (!strcmp(argv[2],"lmagenta")) {
			cout << "\033[1;105m";
			} else if (!strcmp(argv[2],"teal")) {
			cout << "\033[1;106m";
			} else if (!strcmp(argv[2],"white")) {
			cout << "\033[1;107m";
			}
		}
		return 0;
	}
	else {cout << "-f (foreground) black/red/green/yellow/blue/magenta/cyan/white\n-b (background) dgray/lred/lgreen/orange/lblue/lmagenta/teal\n-o (other)reset/bold/underline/flash/inverse/boldoff/underlineoff/inverseoff\nexample: color -f red\n"; return 0;}
}
