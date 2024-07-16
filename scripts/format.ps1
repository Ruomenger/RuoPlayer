$files = Get-ChildItem src -Recurse -Include *.cpp, *.h, *.c

foreach ($file in $files) {
    Write-Host "Formatting $($file.FullName)"
    & clang-format -i $file.FullName
}

Write-Host "Formatting finished"
