// const Web3 = require('web3');
import Web3 from 'web3';


const infuraProjectId = '792ea940402f4b4c9f722cf6e284987a';
const infuraUrl = `https://mainnet.infura.io/v3/${infuraProjectId}`;


// Connect to Ethereum mainnet using Infura
const web3 = new Web3(new Web3.providers.HttpProvider(infuraUrl));

// Update with your Ethereum node URL for a local node
// const web3 = new Web3(new Web3.providers.HttpProvider('http://localhost:8545'));

const certificateContractAddress = '0x73dbbb8f61725752f4f4713687e380806060f3d4'; // Replace with your contract address
const certificateContractABI = [

    {
        "inputs": [
            {
                "internalType": "address",
                "name": "",
                "type": "address"
            }
        ],
        "name": "certificates",
        "outputs": [
            {
                "internalType": "string",
                "name": "candidateName",
                "type": "string"
            },
            {
                "internalType": "string",
                "name": "certificationName",
                "type": "string"
            },
            {
                "internalType": "string",
                "name": "organizationName",
                "type": "string"
            },
            {
                "internalType": "uint256",
                "name": "startDate",
                "type": "uint256"
            },
            {
                "internalType": "uint256",
                "name": "endDate",
                "type": "uint256"
            }
        ],
        "stateMutability": "view",
        "type": "function"
    },
    {
        "inputs": [],
        "name": "getCertificateDetails",
        "outputs": [
            {
                "internalType": "string",
                "name": "candidateName",
                "type": "string"
            },
            {
                "internalType": "string",
                "name": "certificationName",
                "type": "string"
            },
            {
                "internalType": "string",
                "name": "organizationName",
                "type": "string"
            },
            {
                "internalType": "uint256",
                "name": "startDate",
                "type": "uint256"
            },
            {
                "internalType": "uint256",
                "name": "endDate",
                "type": "uint256"
            }
        ],
        "stateMutability": "view",
        "type": "function"
    },
    {
        "inputs": [
            {
                "internalType": "string",
                "name": "_candidateName",
                "type": "string"
            },
            {
                "internalType": "string",
                "name": "_certificationName",
                "type": "string"
            },
            {
                "internalType": "string",
                "name": "_organizationName",
                "type": "string"
            },
            {
                "internalType": "uint256",
                "name": "_startDate",
                "type": "uint256"
            },
            {
                "internalType": "uint256",
                "name": "_endDate",
                "type": "uint256"
            }
        ],
        "name": "issueCertificate",
        "outputs": [],
        "stateMutability": "nonpayable",
        "type": "function"
    }
];

const certificateContract = new web3.eth.Contract(certificateContractABI, certificateContractAddress);

// Function to issue a certificate
const issueCertificate = async () => {
    console.log("issueCertificate is called")
    const candidateName = document.getElementById('candidateName').value;
    const certificationName = document.getElementById('certificationName').value;
    const organizationName = document.getElementById('organizationName').value;
    const startDate = document.getElementById('startDate').value;
    const endDate = document.getElementById('endDate').value;

    const accounts = await web3.eth.getAccounts();
    await certificateContract.methods.issueCertificate(candidateName, certificationName, organizationName, startDate, endDate).send({ from: accounts[0] });
    document.getElementById('issuerResult').innerText = 'Certificate issued successfully!';
};

// Function to verify a certificate
const verifyCertificate = async () => {
    console.log("verifyCertificate is called")
    const address = document.getElementById('addressInput').value;
    const result = await certificateContract.methods.getCertificateDetails().call({ from: address });
    const verifierResult = document.getElementById('verifierResult');

    if (result[0] === '') {
        verifierResult.innerText = 'Certificate not found for this address.';
    } else {
        verifierResult.innerText = `Candidate Name: ${result[0]}\nCertification Name: ${result[1]}\nOrganization Name: ${result[2]}\nStart Date: ${result[3]}\nEnd Date: ${result[4]}`;
    }
};

// Add event listeners
document.getElementById('issueCertificate').addEventListener('click', issueCertificate);
document.getElementById('verifyCertificate').addEventListener('click', verifyCertificate);
