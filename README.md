# 1.Introduction 

This document provides a procedure to train an CDCN model to detect liveness from images.

# 2. Preparing the enviroment 

## 2.1.Get and install CDCN
Download:  

    git clone https://github.com/ZitongYu/CDCN.git
    
 
## 2.2 Create a folder for Python virtual environments 
### 2.2.1.Download python3.8 -venv to create environment:
    
    sudo apt install python3.8-venv
    
### 2.2.2.Create python environment

    python3 -m venv cdcn-env

### 2.2.3.Activate python environment
 
    source cdcn-env/bin/activate

    
# 3.Install essential packages that will be used by CDCN building

Install required packages:

	sudo apt-get install
	pip3 --no-cache-dir install torchvision
	pip install matplotlib
	pip3 --no-cache-dir install pandas
	pip install opencv-python
	pip install imgaug
	pip --no-cache-dir install sklearn
# 4. Building 
## 4.1. Fix Bugs 
- First of all, this repository have a indentation error in line 242 of /CDCN/CVPR2020_paper_codes/
train_CDCN.py file. We must fix that problem.
- Secondly, comment line 246 in train_CDCN.py file and add the following lines to 246
	 	
		device=torch.device("cpu")
        	model.to(device)
	
- Finally, add following codes to line 203
	
		os.environ["CUDA_VISIBLE_DEVICES"]=""
## 4.2. Build Train File 

	cd CDCN/CVPR2020_paper_codes
	python3 train_CDCN.py
