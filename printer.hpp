using namespace std;

void version() {
    cout << "version 1.0" << endl;
}

void too_many_args() {
    cout << "Bylo zadáno příliš mnoho argumentů!" << endl;
}

void unknown_arg() {
    cout <<"Neznámý argument! Zkontrolujte syntaxi." << endl;
}
void no_args() {
    cout << "Žádné argumenty potřebný graf ke zpracování!" << endl;
}

void help() {
    cout <<
            "používání: semestral source_file [options]\n"
                    "\n"
                    "general options:\n"
                    "    -h   --help            print help\n"
                    "    -V   --version         print version\n"
                    "\n"
                    "additional options:\n"
                    "    -t                     multithread computation"
         << endl;
}


