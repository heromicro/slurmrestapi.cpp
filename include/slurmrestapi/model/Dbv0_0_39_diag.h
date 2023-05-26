/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Dbv0_0_39_diag.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_39_diag_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_39_diag_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/Dbv0_0_39_warning.h"
#include "slurmrestapi/model/Dbv0_0_39_meta.h"
#include <vector>
#include "slurmrestapi/model/Dbv0_0_39_error.h"
#include "slurmrestapi/model/V0_0_39_stats_rec.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_39_meta;
class Dbv0_0_39_error;
class Dbv0_0_39_warning;
class V0_0_39_stats_rec;

/// <summary>
/// 
/// </summary>
class  Dbv0_0_39_diag
    : public ModelBase
{
public:
    Dbv0_0_39_diag();
    virtual ~Dbv0_0_39_diag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_39_diag members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_39_meta> getMeta() const;
    bool metaIsSet() const;
    void unsetMeta();

    void setMeta(const std::shared_ptr<Dbv0_0_39_meta>& value);

    /// <summary>
    /// Slurm errors
    /// </summary>
    std::vector<std::shared_ptr<Dbv0_0_39_error>>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<std::shared_ptr<Dbv0_0_39_error>>& value);

    /// <summary>
    /// Slurm warnings
    /// </summary>
    std::vector<std::shared_ptr<Dbv0_0_39_warning>>& getWarnings();
    bool warningsIsSet() const;
    void unsetWarnings();

    void setWarnings(const std::vector<std::shared_ptr<Dbv0_0_39_warning>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_stats_rec> getStatistics() const;
    bool statisticsIsSet() const;
    void unsetStatistics();

    void setStatistics(const std::shared_ptr<V0_0_39_stats_rec>& value);


protected:
    std::shared_ptr<Dbv0_0_39_meta> m_Meta;
    bool m_MetaIsSet;
    std::vector<std::shared_ptr<Dbv0_0_39_error>> m_Errors;
    bool m_ErrorsIsSet;
    std::vector<std::shared_ptr<Dbv0_0_39_warning>> m_Warnings;
    bool m_WarningsIsSet;
    std::shared_ptr<V0_0_39_stats_rec> m_Statistics;
    bool m_StatisticsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_39_diag_H_ */
