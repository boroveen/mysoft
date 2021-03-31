tar -xvf b0mb3r.tar.gz
unzip b0mb3r-master.zip
pip install -r b0mb3r-master/requirements.txt
python3 b0mb3r-master/setup.py build
sudo python3 b0mb3r-master/setup.py install
sudo cp -rf files/* /usr/lib/python3/dist-packages
b0mb3r
