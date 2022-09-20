# ExtendedFemtoShellwith_makefile
Extended FemtoShell using makefile

##Makefile Senarios

###Default Mode without library Linking


    ```` bash
    $ make
    $ make run
       ````
       
![](/1.png "Default Mode")

###Linking Mode with STATIC as Default Linking Type

    ```` bash
    $ make linking_enable=YES
    $ make run
       ````
OR

    ```` bash
    $ make linking_enable=YES linking_type=STATIC
    $ make run
       ````
    
![](/2.png "STATIC Linking Mode")


###Linking Mode with DYNAMIC Library

    ```` bash
    $ make linking_enable=YES linking_type=DYNAMIC
    $ make run
       ````
       
![](/2.png "DYNAMIC Linking Mode")
