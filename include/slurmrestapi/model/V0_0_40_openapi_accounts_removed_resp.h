/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_40_openapi_accounts_removed_resp.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_openapi_accounts_removed_resp_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_openapi_accounts_removed_resp_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_40_openapi_error.h"
#include "slurmrestapi/model/V0_0_40_openapi_warning.h"
#include "slurmrestapi/model/V0_0_40_openapi_meta.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_40_openapi_meta;
class V0_0_40_openapi_error;
class V0_0_40_openapi_warning;


/// <summary>
/// 
/// </summary>
class  V0_0_40_openapi_accounts_removed_resp
    : public ModelBase
{
public:
    V0_0_40_openapi_accounts_removed_resp();
    virtual ~V0_0_40_openapi_accounts_removed_resp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_openapi_accounts_removed_resp members

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getRemovedAccounts();
    bool removedAccountsIsSet() const;
    void unsetRemoved_accounts();

    void setRemovedAccounts(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_openapi_meta> getMeta() const;
    bool metaIsSet() const;
    void unsetMeta();

    void setMeta(const std::shared_ptr<V0_0_40_openapi_meta>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_40_openapi_error>>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<std::shared_ptr<V0_0_40_openapi_error>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_40_openapi_warning>>& getWarnings();
    bool warningsIsSet() const;
    void unsetWarnings();

    void setWarnings(const std::vector<std::shared_ptr<V0_0_40_openapi_warning>>& value);


protected:
    std::vector<utility::string_t> m_Removed_accounts;
    bool m_Removed_accountsIsSet;
    std::shared_ptr<V0_0_40_openapi_meta> m_Meta;
    bool m_MetaIsSet;
    std::vector<std::shared_ptr<V0_0_40_openapi_error>> m_Errors;
    bool m_ErrorsIsSet;
    std::vector<std::shared_ptr<V0_0_40_openapi_warning>> m_Warnings;
    bool m_WarningsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_openapi_accounts_removed_resp_H_ */
