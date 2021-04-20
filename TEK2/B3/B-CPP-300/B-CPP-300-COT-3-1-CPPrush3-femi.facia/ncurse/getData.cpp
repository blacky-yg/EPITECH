/*
** EPITECH PROJECT, 2021
** rush3
** File description:
** getData header
*/

#include "getData.hpp"

std::string removespaces(const std::string &cmd)
{
    char *tmp = (char *)malloc(sizeof(char) * (cmd.size() + 1));
    size_t j = 0;
    tmp[0]= '\0';

    for (size_t i = 0; i < cmd.size(); ) {
        if (cmd[i] != ' ' && cmd[i] != '\t') {
            tmp[j] = cmd[i];
            i++, j++;
        } else {
            tmp[j] = cmd[i];
            j++, i++;
            while (cmd[i] == ' ' || cmd[i] == '\t')
                i++;
        }
    }
    tmp[j] = '\0';
    std::string copy(tmp);
    free(tmp);
    return copy;
}

std::string *splitstring(const std::string &cmd)
{
     unsigned long len = std::count(cmd.begin(), cmd.end(), ' ') + 1;

     auto *result = new std::string [len + 1];
     size_t j = 0;
     for (size_t i = 0; j < len; j++) {
         result[j] = "";
         for (; i < cmd.size() and cmd[i] != ' '; i++)
             result[j] += cmd[i];
         i++;
     }
    return (std::string *)result;
}

std::string *getRam()
{
    // Retoure un tableau de string contenant respectivement "Mem",total  used  free  shared  buff/cache  available
    std::system("free -m > free.txt");
    std::ifstream stream("free.txt");
    std::string line;
    std::string clear;
    if (stream) {
        getline(stream, line);
        getline(stream, line);
    }

    clear = removespaces(line);
    auto result = splitstring(clear);
    std::system("rm free.txt");
    return (std::string *)result;
}

std::string getDate()
{
    std::system( "/usr/bin/date \"+%Y-%m-%d %H H %M min %S sec\" > ./date.txt" );
    std::ostringstream stream;
    stream  << std::ifstream( "./date.txt" ).rdbuf() ;
    std::system("rm date.txt");
    char *date = (char *)malloc(sizeof(char) * (stream.str().size() + 1));
    date = strcpy(date, stream.str().c_str());
    date[stream.str().size() - 1] = '\0';
    std::string Date(date);
    free(date);
    return (Date);
}

std::string getUserName()
{
    char *username = (char *)malloc(sizeof(char) * 257);

    username[0] = '\0';
    getlogin_r(username, 257);
    std::string name(username);
    free(username);
    return name;
}

std::string getHostName()
{
    char *hostname = (char *)malloc(sizeof(char) * 257);

    hostname[0] = '\0';
    gethostname(hostname, 257);
    std::string host(hostname);
    free(hostname);
    return host;
}

std::string getMonitorCore()
{
    std::system( "/usr/bin/cat  /sys/class/thermal/thermal_zone0/temp > ./temp.txt" );
    std::ostringstream stream;
    stream  << std::ifstream( "./temp.txt" ).rdbuf();
    std::system("rm temp.txt");
    char *temp = (char *)malloc(sizeof(char) * (stream.str().size() + 1));
    temp = strcpy(temp, stream.str().c_str());
    temp[stream.str().size() - 1] = '\0';
    std::string Temp(temp);
    free(temp);
    return (Temp);
}

std::string getOs()
{
    char *osname = (char *)malloc(sizeof(char) * 257);

    osname[0] = '\0';
    std::system("lsb_release -d > os.txt");
    std::ostringstream os;
    os << std::ifstream("os.txt").rdbuf();
    os.str().copy(osname, os.str().size(), 13);
    osname[os.str().size() -14] = '\0';
    std::system("rm os.txt");
    std::string Os(osname);
    free(osname);
    return Os;
}

std::string getKernel()
{
    char *k_version = (char *)malloc(sizeof(char) * 257);

    k_version[0] = '\0';
    std::system("uname -r > kernel.txt");
    std::ostringstream kernel;
    kernel << std::ifstream("kernel.txt").rdbuf();
    std::system("rm kernel.txt");
    k_version = strcpy(k_version, kernel.str().c_str());
    k_version[strlen(k_version) -1] = '\0';
    std::string Kernel(k_version);
    free(k_version);
    return (Kernel);
}