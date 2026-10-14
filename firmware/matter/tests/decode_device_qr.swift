import Foundation
import Vision
import AppKit
guard CommandLine.arguments.count == 3,
      let image = NSImage(contentsOfFile: CommandLine.arguments[1]),
      let cgImage = image.cgImage(forProposedRect: nil, context: nil, hints: nil) else { exit(2) }
let request = VNDetectBarcodesRequest()
request.symbologies = [.qr]
try VNImageRequestHandler(cgImage: cgImage).perform([request])
guard let results = request.results, results.count == 1,
      let payload = results[0].payloadStringValue else { exit(3) }
try payload.write(toFile: CommandLine.arguments[2], atomically: true, encoding: .utf8)
