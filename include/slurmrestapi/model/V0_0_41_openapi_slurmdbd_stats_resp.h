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
 * V0_0_41_openapi_slurmdbd_stats_resp.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_stats_resp_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_stats_resp_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_shares_resp_errors_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_shares_resp_meta.h"
#include "slurmrestapi/model/V0_0_41_openapi_shares_resp_warnings_inner.h"
#include <vector>
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_stats_resp_statistics.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_41_openapi_slurmdbd_stats_resp_statistics;
class V0_0_41_openapi_shares_resp_meta;
class V0_0_41_openapi_shares_resp_errors_inner;
class V0_0_41_openapi_shares_resp_warnings_inner;


/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_slurmdbd_stats_resp
    : public ModelBase
{
public:
    V0_0_41_openapi_slurmdbd_stats_resp();
    virtual ~V0_0_41_openapi_slurmdbd_stats_resp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_slurmdbd_stats_resp members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_stats_resp_statistics> getStatistics() const;
    bool statisticsIsSet() const;
    void unsetStatistics();

    void setStatistics(const std::shared_ptr<V0_0_41_openapi_slurmdbd_stats_resp_statistics>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_shares_resp_meta> getMeta() const;
    bool metaIsSet() const;
    void unsetMeta();

    void setMeta(const std::shared_ptr<V0_0_41_openapi_shares_resp_meta>& value);

    /// <summary>
    /// Query errors
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_errors_inner>>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_errors_inner>>& value);

    /// <summary>
    /// Query warnings
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_warnings_inner>>& getWarnings();
    bool warningsIsSet() const;
    void unsetWarnings();

    void setWarnings(const std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_warnings_inner>>& value);


protected:
    std::shared_ptr<V0_0_41_openapi_slurmdbd_stats_resp_statistics> m_Statistics;
    bool m_StatisticsIsSet;
    std::shared_ptr<V0_0_41_openapi_shares_resp_meta> m_Meta;
    bool m_MetaIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_errors_inner>> m_Errors;
    bool m_ErrorsIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_warnings_inner>> m_Warnings;
    bool m_WarningsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_stats_resp_H_ */