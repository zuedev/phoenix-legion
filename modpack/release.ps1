# store location of Arma 3 Tools PublisherCmd
$PublisherCMD = "C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools\Publisher\PublisherCmd.exe"

# store location of hemtt executable
$HEMTT = "C:\Users\zuedev\git\github.com\zuedev\HEMTT_Devcontainer\target\x86_64-pc-windows-gnu\release\hemtt.exe"

$PROJECT_VERSION = & $HEMTT value project.version

# run HEMTT release if mod has a .hemtt/project.toml file
if (Test-Path ".hemtt\project.toml") {
    & $HEMTT release

    # use Arma 3 Tools to publish if mod has a steam\workshop_id.txt file
    if (Test-Path "steam\workshop_id.txt") {
        # read workshop id from file
        $workshopId = Get-Content "steam\workshop_id.txt"

        & $PublisherCMD update /id:$workshopId /path:.hemttout\release\ /changeNote:"automated release for version $PROJECT_VERSION"
    }
}