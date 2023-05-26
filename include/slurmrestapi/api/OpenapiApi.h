/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OpenapiApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_OpenapiApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_OpenapiApi_H_



#include "slurmrestapi/ApiClient.h"
#include "slurmrestapi/ModelBase.h"
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  OpenapiApi 
{
public:

    explicit OpenapiApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~OpenapiApi();

    /// <summary>
    /// Retrieve OpenAPI Specification
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> openapiGet(
    ) const;
    /// <summary>
    /// Retrieve OpenAPI Specification
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> openapiJsonGet(
    ) const;
    /// <summary>
    /// Retrieve OpenAPI Specification
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> openapiV3Get(
    ) const;
    /// <summary>
    /// Retrieve OpenAPI Specification
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> openapiYamlGet(
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_OpenapiApi_H_ */
