1.Introduction

This document provides a procedure to train an CDCN model to detect liveness from images.

2. Preparing the enviroment 


2.1.Get and install CDCN
Download:  

   '''
    git clone https://github.com/ZitongYu/CDCN.git
    
    '''
2.2 Create a folder for Python virtual environments 
2.2.1.Download python3.8 -venv to create environment:
 
    '''
    
    sudo apt install python3.8-venv
    
    '''
2.2.2.Create python environment
  
    '''
    
    python3 -m venv cdcn-env
    
    '''
2.2.3.Activate python environment
  
    '''
    
    source cdcn-env/bin/activate
    
    '''
    
4.Install essential packages that will be used by CDCN building

Install required packages:

    '''
     sudo apt-get install
	   
     cd CDCN
	   sudo apt install python3.8-venv
	   python3 -m venv cdcn-env
	   source cdcn-env/bin/activate
	   pip3 --no-cache-dir install torchvision
	   pip install matplotlib
	   pip3 --no-cache-dir install pandas
	   pip install opencv-python
	   pip install imgaug
	   pip --no-cache-dir install sklearn
    
    '''
