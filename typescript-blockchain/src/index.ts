import * as CryptoJs from 'crypto-js';

class Block {

    static caculateBlockHash = (
        index: number,
        previousHash: string,
        timestamp: number,
        data: string): string =>
        CryptoJs.SHA256(index + previousHash + timestamp + data).toString();

    static valdateStructure = (aBlock: Block): boolean =>
        typeof aBlock.index === "number" &&
        typeof aBlock.hash === "string" &&
        typeof aBlock.previousHash === "string" &&
        typeof aBlock.timestamp === "number" &&
        typeof aBlock.data === "string"

    public index: number;
    public hash: string;
    public previousHash: string;
    public data: string;
    public timestamp: number;

    constructor(
        index: number,
        hash: string,
        previousHash: string,
        data: string,
        timestamp: number,
    ) {
        this.index = index;
        this.hash = hash;
        this.previousHash = previousHash;
        this.data = data;
        this.timestamp = timestamp;
    }
}

const genesisBlock: Block = new Block(0, "2020202020202", " ", "first", 123456)

let blockchain: Block[] = [genesisBlock];

const getBlockchain = (): Block[] => blockchain;

const getLastestBlock = (): Block => blockchain[blockchain.length - 1];

const getNewTimeStamp = (): number => Math.round(new Date().getTime() / 1000);

const createNewBlock = (data: string): Block => {
    const previousBlock: Block = getLastestBlock();
    const newIndex: number = previousBlock.index + 1;
    const newTimestamp: number = getNewTimeStamp();

    const newHash: string = Block.caculateBlockHash(
        newIndex,
        previousBlock.hash,
        newTimestamp,
        data
    );
    const newBlock: Block = new Block(
        newIndex,
        newHash,
        previousBlock.hash,
        data,
        newTimestamp)

    addBlock(newBlock);

    return newBlock;
}

const getHashForBlock = (aBlock: Block): string =>
    Block.caculateBlockHash(aBlock.index, aBlock.previousHash, aBlock.timestamp, aBlock.data);

const isBlockValid = (candidateBlock: Block, perviousBlock: Block): boolean => {
    if (!Block.valdateStructure(candidateBlock)) {
        return false
    } else if (perviousBlock.index + 1 !== candidateBlock.index) {
        return false
    } else if (perviousBlock.hash !== candidateBlock.previousHash) {
        return false
    } else if (getHashForBlock(candidateBlock) !== candidateBlock.hash) {
        return false
    } else {
        return true
    }
}

const addBlock = (candidateBlock: Block): void => {
    if (isBlockValid(candidateBlock, getLastestBlock())) {
        blockchain.push(candidateBlock)
    }
}

createNewBlock("second block");
createNewBlock("third block");
createNewBlock("fourth block");

console.log(blockchain)

export { }