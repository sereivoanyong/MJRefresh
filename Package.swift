// swift-tools-version:5.8
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MJRefresh",
    defaultLocalization: "en",
    products: [
        .library(name: "MJRefresh", targets: ["MJRefresh"]),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "MJRefresh",
            dependencies: [],
            path: "MJRefresh",
            exclude: ["Info.plist"],
            resources: [.process("MJRefresh.bundle")],
            publicHeadersPath: "include",
            cSettings: [
                //Config header path
                .headerSearchPath("."),
            ]
        ),
    ]
)
