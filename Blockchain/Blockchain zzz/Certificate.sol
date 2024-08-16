// SPDX-License-Identifier: UNLICENSED 
// Certificate.sol
pragma solidity ^0.8.0;

contract Certificate {
    struct InternshipCertificate {
        string candidateName;
        string certificationName;
        string organizationName;
        uint256 startDate;
        uint256 endDate;
    }
    
    mapping(address => InternshipCertificate) public certificates;

    function issueCertificate(
        string memory _candidateName,
        string memory _certificationName,
        string memory _organizationName,
        uint256 _startDate,
        uint256 _endDate
    ) public {
        certificates[msg.sender] = InternshipCertificate({
            candidateName: _candidateName,
            certificationName: _certificationName,
            organizationName: _organizationName,
            startDate: _startDate,
            endDate: _endDate
        });
    }

    function getCertificateDetails() public view returns (
        string memory candidateName,
        string memory certificationName,
        string memory organizationName,
        uint256 startDate,
        uint256 endDate
    ) {
        InternshipCertificate storage certificate = certificates[msg.sender];
        return (
            certificate.candidateName,
            certificate.certificationName,
            certificate.organizationName,
            certificate.startDate,
            certificate.endDate
        );
    }
}