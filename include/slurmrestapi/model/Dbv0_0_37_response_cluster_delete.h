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
 * Dbv0_0_37_response_cluster_delete.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_response_cluster_delete_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_response_cluster_delete_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/Dbv0_0_37_error.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_37_error;

/// <summary>
/// 
/// </summary>
class  Dbv0_0_37_response_cluster_delete
    : public ModelBase
{
public:
    Dbv0_0_37_response_cluster_delete();
    virtual ~Dbv0_0_37_response_cluster_delete();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_37_response_cluster_delete members

    /// <summary>
    /// Slurm errors
    /// </summary>
    std::vector<std::shared_ptr<Dbv0_0_37_error>>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<std::shared_ptr<Dbv0_0_37_error>>& value);


protected:
    std::vector<std::shared_ptr<Dbv0_0_37_error>> m_Errors;
    bool m_ErrorsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_response_cluster_delete_H_ */
