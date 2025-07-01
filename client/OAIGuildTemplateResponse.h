/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIGuildTemplateResponse.h
 *
 * 
 */

#ifndef OAIGuildTemplateResponse_H
#define OAIGuildTemplateResponse_H

#include <QJsonObject>

#include "OAIGuildTemplateSnapshotResponse.h"
#include "OAIUserResponse.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIGuildTemplateSnapshotResponse;
class OAIUserResponse;

class OAIGuildTemplateResponse : public OAIObject {
public:
    OAIGuildTemplateResponse();
    OAIGuildTemplateResponse(QString json);
    ~OAIGuildTemplateResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCode() const;
    void setCode(const QString &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    qint32 getUsageCount() const;
    void setUsageCount(const qint32 &usage_count);
    bool is_usage_count_Set() const;
    bool is_usage_count_Valid() const;

    QString getCreatorId() const;
    void setCreatorId(const QString &creator_id);
    bool is_creator_id_Set() const;
    bool is_creator_id_Valid() const;

    QDateTime getCreatedAt() const;
    void setCreatedAt(const QDateTime &created_at);
    bool is_created_at_Set() const;
    bool is_created_at_Valid() const;

    QDateTime getUpdatedAt() const;
    void setUpdatedAt(const QDateTime &updated_at);
    bool is_updated_at_Set() const;
    bool is_updated_at_Valid() const;

    QString getSourceGuildId() const;
    void setSourceGuildId(const QString &source_guild_id);
    bool is_source_guild_id_Set() const;
    bool is_source_guild_id_Valid() const;

    OAIGuildTemplateSnapshotResponse getSerializedSourceGuild() const;
    void setSerializedSourceGuild(const OAIGuildTemplateSnapshotResponse &serialized_source_guild);
    bool is_serialized_source_guild_Set() const;
    bool is_serialized_source_guild_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    OAIUserResponse getCreator() const;
    void setCreator(const OAIUserResponse &creator);
    bool is_creator_Set() const;
    bool is_creator_Valid() const;

    bool isIsDirty() const;
    void setIsDirty(const bool &is_dirty);
    bool is_is_dirty_Set() const;
    bool is_is_dirty_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_code;
    bool m_code_isSet;
    bool m_code_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    qint32 m_usage_count;
    bool m_usage_count_isSet;
    bool m_usage_count_isValid;

    QString m_creator_id;
    bool m_creator_id_isSet;
    bool m_creator_id_isValid;

    QDateTime m_created_at;
    bool m_created_at_isSet;
    bool m_created_at_isValid;

    QDateTime m_updated_at;
    bool m_updated_at_isSet;
    bool m_updated_at_isValid;

    QString m_source_guild_id;
    bool m_source_guild_id_isSet;
    bool m_source_guild_id_isValid;

    OAIGuildTemplateSnapshotResponse m_serialized_source_guild;
    bool m_serialized_source_guild_isSet;
    bool m_serialized_source_guild_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    OAIUserResponse m_creator;
    bool m_creator_isSet;
    bool m_creator_isValid;

    bool m_is_dirty;
    bool m_is_dirty_isSet;
    bool m_is_dirty_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGuildTemplateResponse)

#endif // OAIGuildTemplateResponse_H
