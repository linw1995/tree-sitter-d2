{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
    flake-utils.url = "github:numtide/flake-utils";
    tools.url = "git+https://git.pleshevski.ru/mynix/tools";
  };

  outputs = { self, nixpkgs, flake-utils, tools, ... }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs { inherit system; };
      in
      {
        devShells.default = pkgs.mkShell {
          packages = with pkgs; [
            jq
            tools.packages.${system}.d2
            nodejs-18_x
            tree-sitter
            nodePackages.eslint
            nodePackages.prettier
            nodePackages.vscode-langservers-extracted # html, css, json, eslint
            (import ./dev/nvim-ts.nix { inherit pkgs; })
          ];
        };
      });
}
