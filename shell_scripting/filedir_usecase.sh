#!/bin/bash
echo "Enter dirctory name "
read ndir 
echo "Enter file name"
read nfile


#write in file
WriteFile()
{   
        echo "Press 'W' to write  content into the file and 'N' for no"
        read var
        case $var in
        'W')
        echo "Enter content"
        read content
        echo $content >> $nfile
        echo "Content in the file is:"
        cat $nfile
        ;;
        
        'N')
            echo "thank you"
        ;;

        *)
        echo "Please enter either 'Y' or 'N'"
      ;;
        esac 
        
}



#function to create a new file
CreateFile()
{
         touch $nfile
         echo "file created successfully"
}




#Function to check whether file already exist or not
CheckFile()
{   
         if [ -f "$nfile" ]
         then
         {
          echo "File exist"
          WriteFile
         }
          else
           {
         echo "file not exist"
         CreateFile
         WriteFile
       }
                   fi
}



if [ -d "$ndir" ]
then
{
        echo "Directory exist"
         cd $ndir
         CheckFile
}
else
{
        echo "Directory does not exist"
        mkdir $ndir
        echo "New directory created"
        cd $ndir
        CheckFile
                                
}
fi
