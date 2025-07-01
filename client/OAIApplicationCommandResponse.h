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
 * OAIApplicationCommandResponse.h
 *
 * 
 */

#ifndef OAIApplicationCommandResponse_H
#define OAIApplicationCommandResponse_H

#include <QJsonObject>

#include "OAIApplicationCommandResponse_options_inner.h"
#include <QList>
#include <QMap>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIApplicationCommandResponse_options_inner;

class OAIApplicationCommandResponse : public OAIObject {
public:
    OAIApplicationCommandResponse();
    OAIApplicationCommandResponse(QString json);
    ~OAIApplicationCommandResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getApplicationId() const;
    void setApplicationId(const QString &application_id);
    bool is_application_id_Set() const;
    bool is_application_id_Valid() const;

    QString getVersion() const;
    void setVersion(const QString &version);
    bool is_version_Set() const;
    bool is_version_Valid() const;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getDefaultMemberPermissions() const;
    void setDefaultMemberPermissions(const QString &default_member_permissions);
    bool is_default_member_permissions_Set() const;
    bool is_default_member_permissions_Valid() const;

    QString getNameLocalized() const;
    void setNameLocalized(const QString &name_localized);
    bool is_name_localized_Set() const;
    bool is_name_localized_Valid() const;

    QMap<QString, QString> getNameLocalizations() const;
    void setNameLocalizations(const QMap<QString, QString> &name_localizations);
    bool is_name_localizations_Set() const;
    bool is_name_localizations_Valid() const;

    QString getDescriptionLocalized() const;
    void setDescriptionLocalized(const QString &description_localized);
    bool is_description_localized_Set() const;
    bool is_description_localized_Valid() const;

    QMap<QString, QString> getDescriptionLocalizations() const;
    void setDescriptionLocalizations(const QMap<QString, QString> &description_localizations);
    bool is_description_localizations_Set() const;
    bool is_description_localizations_Valid() const;

    QString getGuildId() const;
    void setGuildId(const QString &guild_id);
    bool is_guild_id_Set() const;
    bool is_guild_id_Valid() const;

    bool isDmPermission() const;
    void setDmPermission(const bool &dm_permission);
    bool is_dm_permission_Set() const;
    bool is_dm_permission_Valid() const;

    QSet<qint32> getContexts() const;
    void setContexts(const QSet<qint32> &contexts);
    bool is_contexts_Set() const;
    bool is_contexts_Valid() const;

    QSet<qint32> getIntegrationTypes() const;
    void setIntegrationTypes(const QSet<qint32> &integration_types);
    bool is_integration_types_Set() const;
    bool is_integration_types_Valid() const;

    QList<OAIApplicationCommandResponse_options_inner> getOptions() const;
    void setOptions(const QList<OAIApplicationCommandResponse_options_inner> &options);
    bool is_options_Set() const;
    bool is_options_Valid() const;

    bool isNsfw() const;
    void setNsfw(const bool &nsfw);
    bool is_nsfw_Set() const;
    bool is_nsfw_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_application_id;
    bool m_application_id_isSet;
    bool m_application_id_isValid;

    QString m_version;
    bool m_version_isSet;
    bool m_version_isValid;

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_default_member_permissions;
    bool m_default_member_permissions_isSet;
    bool m_default_member_permissions_isValid;

    QString m_name_localized;
    bool m_name_localized_isSet;
    bool m_name_localized_isValid;

    QMap<QString, QString> m_name_localizations;
    bool m_name_localizations_isSet;
    bool m_name_localizations_isValid;

    QString m_description_localized;
    bool m_description_localized_isSet;
    bool m_description_localized_isValid;

    QMap<QString, QString> m_description_localizations;
    bool m_description_localizations_isSet;
    bool m_description_localizations_isValid;

    QString m_guild_id;
    bool m_guild_id_isSet;
    bool m_guild_id_isValid;

    bool m_dm_permission;
    bool m_dm_permission_isSet;
    bool m_dm_permission_isValid;

    QSet<qint32> m_contexts;
    bool m_contexts_isSet;
    bool m_contexts_isValid;

    QSet<qint32> m_integration_types;
    bool m_integration_types_isSet;
    bool m_integration_types_isValid;

    QList<OAIApplicationCommandResponse_options_inner> m_options;
    bool m_options_isSet;
    bool m_options_isValid;

    bool m_nsfw;
    bool m_nsfw_isSet;
    bool m_nsfw_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIApplicationCommandResponse)

#endif // OAIApplicationCommandResponse_H
