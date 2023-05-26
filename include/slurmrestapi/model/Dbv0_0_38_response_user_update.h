/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Dbv0_0_38_response_user_update.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_response_user_update_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_response_user_update_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/Dbv0_0_38_error.h"
#include "slurmrestapi/model/Dbv0_0_38_meta.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_38_meta;
class Dbv0_0_38_error;

/// <summary>
/// 
/// </summary>
class  Dbv0_0_38_response_user_update
    : public ModelBase
{
public:
    Dbv0_0_38_response_user_update();
    virtual ~Dbv0_0_38_response_user_update();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_response_user_update members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_38_meta> getMeta() const;
    bool metaIsSet() const;
    void unsetMeta();

    void setMeta(const std::shared_ptr<Dbv0_0_38_meta>& value);

    /// <summary>
    /// Slurm errors
    /// </summary>
    std::vector<std::shared_ptr<Dbv0_0_38_error>>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<std::shared_ptr<Dbv0_0_38_error>>& value);


protected:
    std::shared_ptr<Dbv0_0_38_meta> m_Meta;
    bool m_MetaIsSet;
    std::vector<std::shared_ptr<Dbv0_0_38_error>> m_Errors;
    bool m_ErrorsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_response_user_update_H_ */
