import axios from 'axios';

class Service {
    constructor() {
        let service = axios.create({
            // headers: { csrf: 'token' }
        });
        service.interceptors.response.use(this.handleSuccess, this.handleError);
        this.service = service
    }

    handleSuccess(response) {
        return response;
    }

    handleError = (error) => {
        switch (error.response.status) {
            case 401:
                this.redirectTo(document, '/')
                break;
            default:
                this.redirectTo(document, '/500')
                break;
        }
    }

    redirectTo = (document, path) => {
        document.location = path
    }

    get(path, requestOption, callback) {
        return this.service.get(path, requestOption).then(
            (response) => callback(response.data.data)
        );
    }

}

export default new Service();

// https://gist.github.com/paulsturgess/ebfae1d1ac1779f18487d3dee80d1258