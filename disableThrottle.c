#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main (){
    system("sudo cpufreq-set -c 0 -g performance");
    system("sudo cpufreq-set -c 1 -g performance");
    system("sudo cpufreq-set -c 2 -g performance");
    system("sudo cpufreq-set -c 3 -g performance");
    system("sudo modprobe msr");
    system("sudo rdmsr 0x1FC");
    system("sudo wrmsr 0x1FC 0x000000000004005d");
    system("sudo echo Listo.");
    return;
}

