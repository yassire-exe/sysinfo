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
/*   Created : 2026/10/01 23:57:51
/*   Updated : 2026/10/01 23:57:51
/* @@HEADER-END@@ */

// ft_put.c
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(long n);
void	ft_putnbr_int(int n);

// ft_atoi.c
int	ft_atoi(char *s);
long	ft_atol(char *s);

//cpu.c
void	read_uptime(t_sys *sys);

//mem.c
void	read_cpu_info(t_sys *sys);

//ft_str.c
int	ft_strlen(char *s);
void	ft_strcpy(char *dst, char *src);
void	ft_strncpy(char *dst, char *src, int n);
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, int n);

//info.c
int	read_file(char *path, char *buf, int max);
void	read_distro(t_sys *sys);
void	read_kernel(t_sys *sys);
void	read_hostname(t_sys *sys);
void	read_user_shell(t_sys *sys);
void	read_uptime(t_sys *sys);

//display.c
void	display_box_top(void);
void	display_box_bottom(void);
void	display_line(char *logo, char *key, char *value);
void	display_line_nbr(char *logo, char *key, long n);
void	display_sysinfo(t_sys *sys);
