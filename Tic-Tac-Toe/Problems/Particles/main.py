spin = input()
electric_charge = input()

if spin == "1/2":
    if electric_charge == "-1/3":
        print("Strange Quark")
    elif electric_charge == "2/3":
        print("Charm Quark")
    elif electric_charge == "-1":
        print("Electron Lepton")
    else:
        print("Neutrino Lepton")
else:
    print("Photon Boson")