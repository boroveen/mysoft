{ config, pkgs, ... }:
{
imports = [
./hardware-configuration.nix
];
boot.loader.grub.enable = true;
boot.loader.grub.version = 2;
boot.loader.grub.device = "/dev/vda";
networking.hostName = "NixOS-example";
environment.systemPackages = with pkgs; [
wget vim mkpasswd
];
services.openssh.enable = true;
users.users.toblack = {
isNormalUser = true;
uid = 51011;
group = "toblack";
extraGroups = [ "wheel" "users" ];
};
users.groups.rebrain = {
gid = 51011;
};
system.stateVersion = "20.09";
}
