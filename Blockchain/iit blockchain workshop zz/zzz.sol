// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract Lottery{
    uint public min; //private, internal and external                                                                             
    uint public winningNum;
    uint public allotedNum;


mapping (uint=> address) public allotedTo;

constructor(uint _min, uint _max) {
    admin = msg.sender;
    min= _min;
    max = _max;
}

function buy (uint _num) public payable{
    required(allotedTo{_num} == address(0), "This is error")
    required(msg.value *= 1 ether, "insufficient value")
    allotedTo[_num] = msg.sender

}

function setWinningNum(uint _num) public {
    require(msg.sender == admin, "Not admin")


}