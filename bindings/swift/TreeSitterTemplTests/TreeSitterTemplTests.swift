import XCTest
import SwiftTreeSitter
import TreeSitterTempl

final class TreeSitterTemplTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_templ())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Templ grammar")
    }
}
