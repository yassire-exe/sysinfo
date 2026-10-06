/* @@HEADER-START@@
/*    ___    ___ ________  ________   ________  ___  ________  _______      
/*   |\  \  /  /|\   __  \|\   ____\ |\   ____\|\  \|\   __  \|\  ___ \     
/*   \ \  \/  / | \  \|\  \ \  \___|_\ \  \___|\ \  \ \  \|\  \ \   __/|    
/*    \ \    / / \ \   __  \ \_____  \\ \_____  \ \  \ \   _  _\ \  \_|/__  
/*     \/  /  /   \ \  \ \  \|____|\  \\|____|\  \ \  \ \  \\  \\ \  \_|\ \ 
/*   __/  / /      \ \__\ \__\____\_\  \ ____\_\  \ \__\ \__\\ _\\ \_______\
/*  |\___/ /        \|__|\|__|\_________\\_________\|__|\|__|\|__|\|_______|
/*  \|___|/                  \|_________\|_________|
/*
/*   Auteur  : Yassire Daniel Allaoui
/*   Login   : yassire.exe
/*   Email   : ydanielallaoui@gmail.com
/*
/*   Created : 2026/10/06 23:30:23
/*   Updated : 2026/10/06 23:30:23
/* @@HEADER-END@@ */

#include "sysinfo"

int	main(void)
{
	t_sys sys;
	
	//collect informations
	read_distro(&sys);
	read_kernel(&sys);
	read_hostname(&sys);
	read_user_shell(&sys);
	read_uptime(&sys);
	read_cpu_info(&sys);
	read_mem_info(&sys);

	//display
	display_sysinfo(&sys);
	return (0);
}
