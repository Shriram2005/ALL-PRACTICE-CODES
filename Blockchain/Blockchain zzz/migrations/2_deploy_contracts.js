// 2_deploy_contracts.js

const Certificate = artifacts.require("Certificate");

module.exports = function (deployer) {
    deployer.deploy(Certificate);
};
