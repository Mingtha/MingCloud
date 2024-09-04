@echo off

hdc target mount
hdc shell mount -o remount,rw /

hdc file recv /system/etc/init/key_enable.cfg .

setlocal enabledelayedexpansion 

for /f "delims=" %%i in (key_enable.cfg) do ( 
    set line=%%i 

    set "line=!line:xpm_mode 1=xpm_mode 0!" 
    set "line=!line:xpm_mode 2=xpm_mode 0!" 
    set "line=!line:xpm_mode 3=xpm_mode 0!" 
    set "line=!line:xpm_mode 4=xpm_mode 0!" 

    echo !line!>>$
) 

move $ key_enable.cfg

hdc file send key_enable.cfg /system/etc/init/key_enable.cfg

del key_enable.cfg

hdc shell reboot
